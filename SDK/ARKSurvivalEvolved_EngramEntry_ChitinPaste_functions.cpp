// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ChitinPaste_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ChitinPaste.EngramEntry_ChitinPaste_C.ExecuteUbergraph_EngramEntry_ChitinPaste
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ChitinPaste_C::ExecuteUbergraph_EngramEntry_ChitinPaste(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ChitinPaste.EngramEntry_ChitinPaste_C.ExecuteUbergraph_EngramEntry_ChitinPaste");

	UEngramEntry_ChitinPaste_C_ExecuteUbergraph_EngramEntry_ChitinPaste_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
