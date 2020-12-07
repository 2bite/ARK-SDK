// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_RavagerSaddle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RavagerSaddle.EngramEntry_RavagerSaddle_C.ExecuteUbergraph_EngramEntry_RavagerSaddle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RavagerSaddle_C::ExecuteUbergraph_EngramEntry_RavagerSaddle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RavagerSaddle.EngramEntry_RavagerSaddle_C.ExecuteUbergraph_EngramEntry_RavagerSaddle");

	UEngramEntry_RavagerSaddle_C_ExecuteUbergraph_EngramEntry_RavagerSaddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
