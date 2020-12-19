// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_KarkinoSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_KarkinoSaddle.EngramEntry_KarkinoSaddle_C.ExecuteUbergraph_EngramEntry_KarkinoSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_KarkinoSaddle_C::ExecuteUbergraph_EngramEntry_KarkinoSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_KarkinoSaddle.EngramEntry_KarkinoSaddle_C.ExecuteUbergraph_EngramEntry_KarkinoSaddle");

	UEngramEntry_KarkinoSaddle_C_ExecuteUbergraph_EngramEntry_KarkinoSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
