// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Stego_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Stego.EngramEntry_Saddle_Stego_C.ExecuteUbergraph_EngramEntry_Saddle_Stego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Stego_C::ExecuteUbergraph_EngramEntry_Saddle_Stego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Stego.EngramEntry_Saddle_Stego_C.ExecuteUbergraph_EngramEntry_Saddle_Stego");

	UEngramEntry_Saddle_Stego_C_ExecuteUbergraph_EngramEntry_Saddle_Stego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
