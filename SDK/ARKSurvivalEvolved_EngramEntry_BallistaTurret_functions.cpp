// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_BallistaTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_BallistaTurret.EngramEntry_BallistaTurret_C.ExecuteUbergraph_EngramEntry_BallistaTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_BallistaTurret_C::ExecuteUbergraph_EngramEntry_BallistaTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_BallistaTurret.EngramEntry_BallistaTurret_C.ExecuteUbergraph_EngramEntry_BallistaTurret");

	UEngramEntry_BallistaTurret_C_ExecuteUbergraph_EngramEntry_BallistaTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
