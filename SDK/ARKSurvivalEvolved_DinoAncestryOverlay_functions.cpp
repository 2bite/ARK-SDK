// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAncestryOverlay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAncestryOverlay.DinoAncestryOverlay_C.ExecuteUbergraph_DinoAncestryOverlay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAncestryOverlay_C::ExecuteUbergraph_DinoAncestryOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAncestryOverlay.DinoAncestryOverlay_C.ExecuteUbergraph_DinoAncestryOverlay");

	UDinoAncestryOverlay_C_ExecuteUbergraph_DinoAncestryOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
