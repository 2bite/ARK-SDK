// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_ChemBench_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_ChemBench.StorageBox_ChemBench_C.UserConstructionScript
// ()

void AStorageBox_ChemBench_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_ChemBench.StorageBox_ChemBench_C.UserConstructionScript");

	AStorageBox_ChemBench_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_ChemBench.StorageBox_ChemBench_C.ExecuteUbergraph_StorageBox_ChemBench
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_ChemBench_C::ExecuteUbergraph_StorageBox_ChemBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_ChemBench.StorageBox_ChemBench_C.ExecuteUbergraph_StorageBox_ChemBench");

	AStorageBox_ChemBench_C_ExecuteUbergraph_StorageBox_ChemBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
