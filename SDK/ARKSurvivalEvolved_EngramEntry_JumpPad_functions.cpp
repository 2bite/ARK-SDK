// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_JumpPad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_JumpPad.EngramEntry_JumpPad_C.ExecuteUbergraph_EngramEntry_JumpPad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_JumpPad_C::ExecuteUbergraph_EngramEntry_JumpPad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_JumpPad.EngramEntry_JumpPad_C.ExecuteUbergraph_EngramEntry_JumpPad");

	UEngramEntry_JumpPad_C_ExecuteUbergraph_EngramEntry_JumpPad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
