// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Kaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Kaiju.DinoSettings_Kaiju_C.ExecuteUbergraph_DinoSettings_Kaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Kaiju_C::ExecuteUbergraph_DinoSettings_Kaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Kaiju.DinoSettings_Kaiju_C.ExecuteUbergraph_DinoSettings_Kaiju");

	UDinoSettings_Kaiju_C_ExecuteUbergraph_DinoSettings_Kaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
