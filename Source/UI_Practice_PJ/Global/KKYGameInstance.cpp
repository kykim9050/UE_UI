// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/KKYGameInstance.h"
#include "Global/DataTable/MaterialDataRow.h"

const FMaterialDataRow* UKKYGameInstance::GetMaterialDataRow(const FName _Name)
{
	if (nullptr == MaterialDataRow)
	{
		UE_LOG(LogType, Fatal, TEXT("%S(%u)> if (nullptr == MonsterDataTable)"), __FUNCTION__, __LINE__);
		return nullptr;
	}

	FMaterialDataRow* Data = MaterialDataRow->FindRow<FMaterialDataRow>(_Name, nullptr);

	if (nullptr == Data)
	{
		UE_LOG(LogType, Error, TEXT("%S(%u)> %s Name Data Is Nullptr"), __FUNCTION__, __LINE__, *_Name.ToString());
		return nullptr;
	}

	return Data;
}

UObject* UKKYGameInstance::GetMaterialDataObject(const FName _Name) const
{
	FMaterialDataRow* Data = MaterialDataRow->FindRow<FMaterialDataRow>(_Name, "");

	UObject* Obj = Cast<UObject>(Data->MaterialInst);

	if (nullptr == Obj)
	{
		return nullptr;
	}

	return Obj;
}