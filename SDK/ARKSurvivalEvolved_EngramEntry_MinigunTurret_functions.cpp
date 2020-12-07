// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_MinigunTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_MinigunTurret.EngramEntry_MinigunTurret_C.ExecuteUbergraph_EngramEntry_MinigunTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_MinigunTurret_C::ExecuteUbergraph_EngramEntry_MinigunTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_MinigunTurret.EngramEntry_MinigunTurret_C.ExecuteUbergraph_EngramEntry_MinigunTurret");

	UEngramEntry_MinigunTurret_C_ExecuteUbergraph_EngramEntry_MinigunTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
