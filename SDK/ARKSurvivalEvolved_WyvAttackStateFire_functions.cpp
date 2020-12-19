// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvAttackStateFire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvAttackStateFire.WyvAttackStateFire_C.ExecuteUbergraph_WyvAttackStateFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWyvAttackStateFire_C::ExecuteUbergraph_WyvAttackStateFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvAttackStateFire.WyvAttackStateFire_C.ExecuteUbergraph_WyvAttackStateFire");

	UWyvAttackStateFire_C_ExecuteUbergraph_WyvAttackStateFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
