// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_COREMEDIA_PrimalGameData_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.BPMergeModGameData
// ()
// Parameters:
// class UPrimalGameData**        AnotherGameData                (Parm, ZeroConstructor, IsPlainOldData)

void UCOREMEDIA_PrimalGameData_BP_C::BPMergeModGameData(class UPrimalGameData** AnotherGameData)
{
	static auto fn = UObject::FindObject<UFunction>("Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.BPMergeModGameData");

	UCOREMEDIA_PrimalGameData_BP_C_BPMergeModGameData_Params params;
	params.AnotherGameData = AnotherGameData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.ExecuteUbergraph_COREMEDIA_PrimalGameData_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCOREMEDIA_PrimalGameData_BP_C::ExecuteUbergraph_COREMEDIA_PrimalGameData_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C.ExecuteUbergraph_COREMEDIA_PrimalGameData_BP");

	UCOREMEDIA_PrimalGameData_BP_C_ExecuteUbergraph_COREMEDIA_PrimalGameData_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
