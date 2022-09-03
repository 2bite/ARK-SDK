// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekEjectedRider_Exosuit_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MekEjectedRider_Exosuit.Buff_MekEjectedRider_Exosuit_C.UserConstructionScript
// ()

void ABuff_MekEjectedRider_Exosuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekEjectedRider_Exosuit.Buff_MekEjectedRider_Exosuit_C.UserConstructionScript");

	ABuff_MekEjectedRider_Exosuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MekEjectedRider_Exosuit.Buff_MekEjectedRider_Exosuit_C.ExecuteUbergraph_Buff_MekEjectedRider_Exosuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MekEjectedRider_Exosuit_C::ExecuteUbergraph_Buff_MekEjectedRider_Exosuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MekEjectedRider_Exosuit.Buff_MekEjectedRider_Exosuit_C.ExecuteUbergraph_Buff_MekEjectedRider_Exosuit");

	ABuff_MekEjectedRider_Exosuit_C_ExecuteUbergraph_Buff_MekEjectedRider_Exosuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
