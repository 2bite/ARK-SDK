// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Medium_Desmodus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Medium_Desmodus.DinoSettings_Carnivore_Medium_Desmodus_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Desmodus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Medium_Desmodus_C::ExecuteUbergraph_DinoSettings_Carnivore_Medium_Desmodus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Medium_Desmodus.DinoSettings_Carnivore_Medium_Desmodus_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Desmodus");

	UDinoSettings_Carnivore_Medium_Desmodus_C_ExecuteUbergraph_DinoSettings_Carnivore_Medium_Desmodus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif