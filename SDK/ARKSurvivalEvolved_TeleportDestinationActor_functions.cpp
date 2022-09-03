// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TeleportDestinationActor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeleportDestinationActor.TeleportDestinationActor_C.UserConstructionScript
// ()

void ATeleportDestinationActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDestinationActor.TeleportDestinationActor_C.UserConstructionScript");

	ATeleportDestinationActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportDestinationActor.TeleportDestinationActor_C.ExecuteUbergraph_TeleportDestinationActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATeleportDestinationActor_C::ExecuteUbergraph_TeleportDestinationActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportDestinationActor.TeleportDestinationActor_C.ExecuteUbergraph_TeleportDestinationActor");

	ATeleportDestinationActor_C_ExecuteUbergraph_TeleportDestinationActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
