// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_CannonBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemAmmo_CannonBall.PrimalItemAmmo_CannonBall_C.ExecuteUbergraph_PrimalItemAmmo_CannonBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemAmmo_CannonBall_C::ExecuteUbergraph_PrimalItemAmmo_CannonBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_CannonBall.PrimalItemAmmo_CannonBall_C.ExecuteUbergraph_PrimalItemAmmo_CannonBall");

	UPrimalItemAmmo_CannonBall_C_ExecuteUbergraph_PrimalItemAmmo_CannonBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
