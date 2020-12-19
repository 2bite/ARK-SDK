// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_SpaceWhale_Hyperdrive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_SpaceWhale_Hyperdrive.DinoAttackState_SpaceWhale_Hyperdrive_C.ExecuteUbergraph_DinoAttackState_SpaceWhale_Hyperdrive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_SpaceWhale_Hyperdrive_C::ExecuteUbergraph_DinoAttackState_SpaceWhale_Hyperdrive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpaceWhale_Hyperdrive.DinoAttackState_SpaceWhale_Hyperdrive_C.ExecuteUbergraph_DinoAttackState_SpaceWhale_Hyperdrive");

	UDinoAttackState_SpaceWhale_Hyperdrive_C_ExecuteUbergraph_DinoAttackState_SpaceWhale_Hyperdrive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
