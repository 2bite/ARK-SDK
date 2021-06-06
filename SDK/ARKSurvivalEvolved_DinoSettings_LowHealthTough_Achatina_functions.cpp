// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_LowHealthTough_Achatina_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_LowHealthTough_Achatina.DinoSettings_LowHealthTough_Achatina_C.ExecuteUbergraph_DinoSettings_LowHealthTough_Achatina
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_LowHealthTough_Achatina_C::ExecuteUbergraph_DinoSettings_LowHealthTough_Achatina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_LowHealthTough_Achatina.DinoSettings_LowHealthTough_Achatina_C.ExecuteUbergraph_DinoSettings_LowHealthTough_Achatina");

	UDinoSettings_LowHealthTough_Achatina_C_ExecuteUbergraph_DinoSettings_LowHealthTough_Achatina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
