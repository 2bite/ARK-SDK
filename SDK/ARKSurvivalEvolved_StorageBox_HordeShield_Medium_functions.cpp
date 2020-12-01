// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_HordeShield_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_HordeShield_Medium.StorageBox_HordeShield_Medium_C.UserConstructionScript
// ()

void AStorageBox_HordeShield_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield_Medium.StorageBox_HordeShield_Medium_C.UserConstructionScript");

	AStorageBox_HordeShield_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_HordeShield_Medium.StorageBox_HordeShield_Medium_C.ExecuteUbergraph_StorageBox_HordeShield_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_HordeShield_Medium_C::ExecuteUbergraph_StorageBox_HordeShield_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_HordeShield_Medium.StorageBox_HordeShield_Medium_C.ExecuteUbergraph_StorageBox_HordeShield_Medium");

	AStorageBox_HordeShield_Medium_C_ExecuteUbergraph_StorageBox_HordeShield_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
