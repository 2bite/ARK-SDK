// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_SpaceWhale_Tail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_SpaceWhale_Tail.DinoAttackState_SpaceWhale_Tail_C.ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_SpaceWhale_Tail_C::ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpaceWhale_Tail.DinoAttackState_SpaceWhale_Tail_C.ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail");

	UDinoAttackState_SpaceWhale_Tail_C_ExecuteUbergraph_DinoAttackState_SpaceWhale_Tail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
