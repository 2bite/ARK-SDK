// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Lamppost_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Lamppost.EngramEntry_Lamppost_C.ExecuteUbergraph_EngramEntry_Lamppost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Lamppost_C::ExecuteUbergraph_EngramEntry_Lamppost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Lamppost.EngramEntry_Lamppost_C.ExecuteUbergraph_EngramEntry_Lamppost");

	UEngramEntry_Lamppost_C_ExecuteUbergraph_EngramEntry_Lamppost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
