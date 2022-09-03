// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_AnvilBench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.UserConstructionScript
// ()

void AStorageBox_AnvilBench_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.UserConstructionScript");

	AStorageBox_AnvilBench_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.ExecuteUbergraph_StorageBox_AnvilBench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_AnvilBench_C::ExecuteUbergraph_StorageBox_AnvilBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_AnvilBench.StorageBox_AnvilBench_C.ExecuteUbergraph_StorageBox_AnvilBench");

	AStorageBox_AnvilBench_C_ExecuteUbergraph_StorageBox_AnvilBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
