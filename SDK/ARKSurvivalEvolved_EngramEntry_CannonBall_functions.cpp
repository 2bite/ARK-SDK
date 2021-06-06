// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CannonBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CannonBall.EngramEntry_CannonBall_C.ExecuteUbergraph_EngramEntry_CannonBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CannonBall_C::ExecuteUbergraph_EngramEntry_CannonBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CannonBall.EngramEntry_CannonBall_C.ExecuteUbergraph_EngramEntry_CannonBall");

	UEngramEntry_CannonBall_C_ExecuteUbergraph_EngramEntry_CannonBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
