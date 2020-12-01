// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GenericStructureSettings_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericStructureSettings.GenericStructureSettings_C.ExecuteUbergraph_GenericStructureSettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGenericStructureSettings_C::ExecuteUbergraph_GenericStructureSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericStructureSettings.GenericStructureSettings_C.ExecuteUbergraph_GenericStructureSettings");

	UGenericStructureSettings_C_ExecuteUbergraph_GenericStructureSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
