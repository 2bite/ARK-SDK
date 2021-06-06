// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Sunlight_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Sunlight.Buff_Sunlight_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Sunlight_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.BPPreventAddingOtherBuff");

	ABuff_Sunlight_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Sunlight.Buff_Sunlight_C.Get Max Health
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Sunlight_C::Get_Max_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.Get Max Health");

	ABuff_Sunlight_C_Get_Max_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Sunlight.Buff_Sunlight_C.GetDamageMitigationArmorEquippedCount
// ()
// Parameters:
// int                            NumItemsEquipped               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Sunlight_C::GetDamageMitigationArmorEquippedCount(int* NumItemsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.GetDamageMitigationArmorEquippedCount");

	ABuff_Sunlight_C_GetDamageMitigationArmorEquippedCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumItemsEquipped != nullptr)
		*NumItemsEquipped = params.NumItemsEquipped;
}


// Function Buff_Sunlight.Buff_Sunlight_C.DamageDurability
// ()
// Parameters:
// class UPrimalItem*             Item                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Sunlight_C::DamageDurability(class UPrimalItem* Item, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.DamageDurability");

	ABuff_Sunlight_C_DamageDurability_Params params;
	params.Item = Item;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.RemoveBuffs
// ()

void ABuff_Sunlight_C::RemoveBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.RemoveBuffs");

	ABuff_Sunlight_C_RemoveBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Sunlight_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.BPActivated");

	ABuff_Sunlight_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Sunlight_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.BuffTickServer");

	ABuff_Sunlight_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.UserConstructionScript
// ()

void ABuff_Sunlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.UserConstructionScript");

	ABuff_Sunlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__FinishedFunc
// ()

void ABuff_Sunlight_C::LocalParticleFadeout__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__FinishedFunc");

	ABuff_Sunlight_C_LocalParticleFadeout__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__UpdateFunc
// ()

void ABuff_Sunlight_C::LocalParticleFadeout__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.LocalParticleFadeout__UpdateFunc");

	ABuff_Sunlight_C_LocalParticleFadeout__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.ReceiveBeginPlay
// ()

void ABuff_Sunlight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.ReceiveBeginPlay");

	ABuff_Sunlight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Sunlight_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.BPDeactivated");

	ABuff_Sunlight_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Sunlight.Buff_Sunlight_C.ExecuteUbergraph_Buff_Sunlight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Sunlight_C::ExecuteUbergraph_Buff_Sunlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Sunlight.Buff_Sunlight_C.ExecuteUbergraph_Buff_Sunlight");

	ABuff_Sunlight_C_ExecuteUbergraph_Buff_Sunlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
