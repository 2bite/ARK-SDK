// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFlyerPassengerGrab_Slot1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateFlyerPassengerGrab_Slot1.DinoAttackStateFlyerPassengerGrab_Slot1_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFlyerPassengerGrab_Slot1_C::ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFlyerPassengerGrab_Slot1.DinoAttackStateFlyerPassengerGrab_Slot1_C.ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1");

	UDinoAttackStateFlyerPassengerGrab_Slot1_C_ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab_Slot1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
