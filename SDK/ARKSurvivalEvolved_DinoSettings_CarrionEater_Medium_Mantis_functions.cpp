// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_CarrionEater_Medium_Mantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_CarrionEater_Medium_Mantis.DinoSettings_CarrionEater_Medium_Mantis_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Mantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_CarrionEater_Medium_Mantis_C::ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Mantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_CarrionEater_Medium_Mantis.DinoSettings_CarrionEater_Medium_Mantis_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Mantis");

	UDinoSettings_CarrionEater_Medium_Mantis_C_ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Mantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
