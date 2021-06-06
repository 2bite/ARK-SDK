// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_Megatherium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Omnivore_Medium_Megatherium.DinoSettings_Omnivore_Medium_Megatherium_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Megatherium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Omnivore_Medium_Megatherium_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_Megatherium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_Megatherium.DinoSettings_Omnivore_Medium_Megatherium_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Megatherium");

	UDinoSettings_Omnivore_Medium_Megatherium_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_Megatherium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
