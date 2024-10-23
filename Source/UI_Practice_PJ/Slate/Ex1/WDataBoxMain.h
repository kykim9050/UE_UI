// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "WDataBoxMain.generated.h"

class SDataBoxMain : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDataBoxMain) {}
	SLATE_ATTRIBUTE(int32, Cnt)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	FText GetDataTitle() const;
	FText GetDataCnt() const;
	TAttribute<int32> GetCnt() const;
	void SetCnt();

protected:

private:
	FString DataTitle = "Test Title";
	TAttribute<int32> Cnt = 43;
};
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UI_PRACTICE_PJ_API UWDataBoxMain : public UWidget
{
	GENERATED_BODY()
public:

protected:
	void ReleaseSlateResources(bool bReleaseChildren) override;
	const FText GetPaletteCategory() override;
	virtual TSharedRef<SWidget> RebuildWidget() override;

private:
	TSharedPtr<SDataBoxMain> DataBoxMainWidget = nullptr;
};
