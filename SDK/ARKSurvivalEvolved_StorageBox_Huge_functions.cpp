// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_Huge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_Huge.StorageBox_Huge_C.UserConstructionScript
// ()

void AStorageBox_Huge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Huge.StorageBox_Huge_C.UserConstructionScript");

	AStorageBox_Huge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_Huge.StorageBox_Huge_C.ExecuteUbergraph_StorageBox_Huge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_Huge_C::ExecuteUbergraph_StorageBox_Huge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_Huge.StorageBox_Huge_C.ExecuteUbergraph_StorageBox_Huge");

	AStorageBox_Huge_C_ExecuteUbergraph_StorageBox_Huge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
