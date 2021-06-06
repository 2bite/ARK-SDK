// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Clay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Clay.EngramEntry_Clay_C.ExecuteUbergraph_EngramEntry_Clay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Clay_C::ExecuteUbergraph_EngramEntry_Clay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Clay.EngramEntry_Clay_C.ExecuteUbergraph_EngramEntry_Clay");

	UEngramEntry_Clay_C_ExecuteUbergraph_EngramEntry_Clay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
