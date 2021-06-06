// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carrion_Vulture_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carrion_Vulture.DinoSettings_Carrion_Vulture_C.ExecuteUbergraph_DinoSettings_Carrion_Vulture
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carrion_Vulture_C::ExecuteUbergraph_DinoSettings_Carrion_Vulture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carrion_Vulture.DinoSettings_Carrion_Vulture_C.ExecuteUbergraph_DinoSettings_Carrion_Vulture");

	UDinoSettings_Carrion_Vulture_C_ExecuteUbergraph_DinoSettings_Carrion_Vulture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
