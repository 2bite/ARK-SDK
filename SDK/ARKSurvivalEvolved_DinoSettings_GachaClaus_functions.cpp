// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_GachaClaus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_GachaClaus.DinoSettings_GachaClaus_C.ExecuteUbergraph_DinoSettings_GachaClaus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_GachaClaus_C::ExecuteUbergraph_DinoSettings_GachaClaus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_GachaClaus.DinoSettings_GachaClaus_C.ExecuteUbergraph_DinoSettings_GachaClaus");

	UDinoSettings_GachaClaus_C_ExecuteUbergraph_DinoSettings_GachaClaus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
