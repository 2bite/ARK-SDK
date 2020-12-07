// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_HordeShield_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_HordeShield_Easy.StorageBox_HordeShield_Easy_C.UserConstructionScript
// ()

void AStorageBox_HordeShield_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield_Easy.StorageBox_HordeShield_Easy_C.UserConstructionScript");

	AStorageBox_HordeShield_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield_Easy.StorageBox_HordeShield_Easy_C.ExecuteUbergraph_StorageBox_HordeShield_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_Easy_C::ExecuteUbergraph_StorageBox_HordeShield_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield_Easy.StorageBox_HordeShield_Easy_C.ExecuteUbergraph_StorageBox_HordeShield_Easy");

	AStorageBox_HordeShield_Easy_C_ExecuteUbergraph_StorageBox_HordeShield_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
