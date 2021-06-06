// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_CarrionEater_Small_Beetle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_CarrionEater_Small_Beetle.DinoSettings_CarrionEater_Small_Beetle_C.ExecuteUbergraph_DinoSettings_CarrionEater_Small_Beetle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_CarrionEater_Small_Beetle_C::ExecuteUbergraph_DinoSettings_CarrionEater_Small_Beetle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_CarrionEater_Small_Beetle.DinoSettings_CarrionEater_Small_Beetle_C.ExecuteUbergraph_DinoSettings_CarrionEater_Small_Beetle");

	UDinoSettings_CarrionEater_Small_Beetle_C_ExecuteUbergraph_DinoSettings_CarrionEater_Small_Beetle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
