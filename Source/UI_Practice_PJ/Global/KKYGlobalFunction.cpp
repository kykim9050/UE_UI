// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/KKYGlobalFunction.h"

#include "Global/KKYGameInstance.h"

UKKYGameInstance* UKKYGlobalFunction::GetMainGameInstance(const UWorld* _WorldContextObject)
{
	UKKYGameInstance* Inst = _WorldContextObject->GetGameInstanceChecked<UKKYGameInstance>();

	if (false == Inst->IsValidLowLevel())
	{
		UE_LOG(LogType, Fatal, TEXT("%S(%u)> if (false == Inst->IsValidLowLevel())"), __FUNCTION__, __LINE__);
		return nullptr;
	}

	return Inst;
}
