// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneRailing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneRailing.EngramEntry_StoneRailing_C.ExecuteUbergraph_EngramEntry_StoneRailing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneRailing_C::ExecuteUbergraph_EngramEntry_StoneRailing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneRailing.EngramEntry_StoneRailing_C.ExecuteUbergraph_EngramEntry_StoneRailing");

	UEngramEntry_StoneRailing_C_ExecuteUbergraph_EngramEntry_StoneRailing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
