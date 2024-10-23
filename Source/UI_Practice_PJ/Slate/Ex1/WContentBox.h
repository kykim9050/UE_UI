// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "WContentBox.generated.h"

class SContentBox : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SContentBox) {}
	SLATE_NAMED_SLOT(FArguments, NWidget)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

protected:

private:
	TSharedPtr<SWidget> NWidget = nullptr;
};

UCLASS(Blueprintable, BlueprintType)
class UI_PRACTICE_PJ_API UWContentBox : public UWidget
{
	GENERATED_BODY()
public:

protected:
	void ReleaseSlateResources(bool bReleaseChildren) override;
	const FText GetPaletteCategory() override;
	virtual TSharedRef<SWidget> RebuildWidget() override;

private:
	TSharedPtr<SContentBox> ContentBoxWidget = nullptr;
};
