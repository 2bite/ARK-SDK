// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Omnivore_Medium_Dinopithecus.DinoSettings_Omnivore_Medium_Dinopithecus_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Omnivore_Medium_Dinopithecus_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_Dinopithecus.DinoSettings_Omnivore_Medium_Dinopithecus_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Dinopithecus");

	UDinoSettings_Omnivore_Medium_Dinopithecus_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif