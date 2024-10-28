// Fill out your copyright notice in the Description page of Project Settings.
#include "UI/CircleProgressWidget.h"

#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Global/KKYGlobalFunction.h"
#include "Global/KKYGameInstance.h"


UCircleProgressWidget::UCircleProgressWidget()
{
	
}

void UCircleProgressWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	// ������ ���̺��� �̸� ������ �� �ֵ��� �����.
	CPWSizeBox = WidgetComponentInit<USizeBox>(TEXT("CP_SizeBox"));
	SetBoxSize(300.0f, 300.0f);

	// ������ ���̺��� �̸� ������ �� �ֵ��� �����.
	CPWImage = WidgetComponentInit<UImage>(TEXT("CP_Image"));
	SetGraphImageRes();
}

void UCircleProgressWidget::SetBoxSize(float _Width, float _Height)
{
	if (nullptr == CPWSizeBox)
	{
		return;
	}
	
	// ������ �ڽ��� �ʺ�, ���� ���� ����
	CPWSizeBox->WidthOverride = _Width;
	CPWSizeBox->HeightOverride = _Height;
}

void UCircleProgressWidget::SetGraphImageRes()
{
	UKKYGameInstance* Inst = UKKYGlobalFunction::GetMainGameInstance(GetWorld());

	// Image Widget�� Brush�� ���ҽ��� �Է��ϱ� ���ؼ��� UObject* ������ ���ڸ� ����־�� ��.
	UObject* Obj = Inst->GetMaterialDataObject(TEXT("RoundProgressBar"));

	// �귯�� ���ҽ��� Widget Image�� ����
	CPWImage->SetBrushResourceObject(Obj);
}