// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_CarrionEater_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_CarrionEater_Medium.DinoSettings_CarrionEater_Medium_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_CarrionEater_Medium_C::ExecuteUbergraph_DinoSettings_CarrionEater_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_CarrionEater_Medium.DinoSettings_CarrionEater_Medium_C.ExecuteUbergraph_DinoSettings_CarrionEater_Medium");

	UDinoSettings_CarrionEater_Medium_C_ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
