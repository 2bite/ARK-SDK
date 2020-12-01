// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_CarrionEater_Medium_Scorpion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_CarrionEater_Medium_Scorpion.DinoSettings_CarrionEater_Medium_Scorpion_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Scorpion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_CarrionEater_Medium_Scorpion_C::ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Scorpion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_CarrionEater_Medium_Scorpion.DinoSettings_CarrionEater_Medium_Scorpion_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Scorpion");

	UDinoSettings_CarrionEater_Medium_Scorpion_C_ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Scorpion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
