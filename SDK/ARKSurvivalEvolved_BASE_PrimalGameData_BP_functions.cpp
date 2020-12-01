// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BASE_PrimalGameData_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData
// ()
// Parameters:
// class UPrimalGameData*         AnotherGameData                (Parm, ZeroConstructor, IsPlainOldData)

void UBASE_PrimalGameData_BP_C::BPMergeModGameData(class UPrimalGameData* AnotherGameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.BPMergeModGameData");

	UBASE_PrimalGameData_BP_C_BPMergeModGameData_Params params;
	params.AnotherGameData = AnotherGameData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.ExecuteUbergraph_BASE_PrimalGameData_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBASE_PrimalGameData_BP_C::ExecuteUbergraph_BASE_PrimalGameData_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BASE_PrimalGameData_BP.BASE_PrimalGameData_BP_C.ExecuteUbergraph_BASE_PrimalGameData_BP");

	UBASE_PrimalGameData_BP_C_ExecuteUbergraph_BASE_PrimalGameData_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
