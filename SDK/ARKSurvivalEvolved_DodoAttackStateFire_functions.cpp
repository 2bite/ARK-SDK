// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DodoAttackStateFire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DodoAttackStateFire.DodoAttackStateFire_C.ExecuteUbergraph_DodoAttackStateFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDodoAttackStateFire_C::ExecuteUbergraph_DodoAttackStateFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DodoAttackStateFire.DodoAttackStateFire_C.ExecuteUbergraph_DodoAttackStateFire");

	UDodoAttackStateFire_C_ExecuteUbergraph_DodoAttackStateFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
