// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IchthyornisAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IchthyornisAnimBP.IchthyornisAnimBP_C.ExecuteUbergraph_IchthyornisAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIchthyornisAnimBP_C::ExecuteUbergraph_IchthyornisAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IchthyornisAnimBP.IchthyornisAnimBP_C.ExecuteUbergraph_IchthyornisAnimBP");

	UIchthyornisAnimBP_C_ExecuteUbergraph_IchthyornisAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
