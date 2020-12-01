// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProceduralSettings_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProceduralSettings.ProceduralSettings_C.ExecuteUbergraph_ProceduralSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralSettings_C::ExecuteUbergraph_ProceduralSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralSettings.ProceduralSettings_C.ExecuteUbergraph_ProceduralSettings");

	UProceduralSettings_C_ExecuteUbergraph_ProceduralSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
