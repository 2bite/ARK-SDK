// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PoisonTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PoisonTrap.EngramEntry_PoisonTrap_C.ExecuteUbergraph_EngramEntry_PoisonTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PoisonTrap_C::ExecuteUbergraph_EngramEntry_PoisonTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PoisonTrap.EngramEntry_PoisonTrap_C.ExecuteUbergraph_EngramEntry_PoisonTrap");

	UEngramEntry_PoisonTrap_C_ExecuteUbergraph_EngramEntry_PoisonTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
