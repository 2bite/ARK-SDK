// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LightBug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_LightBug.DinoEntry_LightBug_C.ExecuteUbergraph_DinoEntry_LightBug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_LightBug_C::ExecuteUbergraph_DinoEntry_LightBug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_LightBug.DinoEntry_LightBug_C.ExecuteUbergraph_DinoEntry_LightBug");

	UDinoEntry_LightBug_C_ExecuteUbergraph_DinoEntry_LightBug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
