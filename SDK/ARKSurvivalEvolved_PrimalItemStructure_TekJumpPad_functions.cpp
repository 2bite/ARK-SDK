// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekJumpPad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekJumpPad.PrimalItemStructure_TekJumpPad_C.ExecuteUbergraph_PrimalItemStructure_TekJumpPad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekJumpPad_C::ExecuteUbergraph_PrimalItemStructure_TekJumpPad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekJumpPad.PrimalItemStructure_TekJumpPad_C.ExecuteUbergraph_PrimalItemStructure_TekJumpPad");

	UPrimalItemStructure_TekJumpPad_C_ExecuteUbergraph_PrimalItemStructure_TekJumpPad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
