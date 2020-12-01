// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoThrowMudState_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChalicoThrowMudState.ChalicoThrowMudState_C.ExecuteUbergraph_ChalicoThrowMudState
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChalicoThrowMudState_C::ExecuteUbergraph_ChalicoThrowMudState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChalicoThrowMudState.ChalicoThrowMudState_C.ExecuteUbergraph_ChalicoThrowMudState");

	UChalicoThrowMudState_C_ExecuteUbergraph_ChalicoThrowMudState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
