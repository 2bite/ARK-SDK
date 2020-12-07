// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Mantis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Mantis.DinoEntry_Mantis_C.ExecuteUbergraph_DinoEntry_Mantis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Mantis_C::ExecuteUbergraph_DinoEntry_Mantis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Mantis.DinoEntry_Mantis_C.ExecuteUbergraph_DinoEntry_Mantis");

	UDinoEntry_Mantis_C_ExecuteUbergraph_DinoEntry_Mantis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
