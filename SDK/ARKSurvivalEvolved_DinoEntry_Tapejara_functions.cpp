// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Tapejara.DinoEntry_Tapejara_C.ExecuteUbergraph_DinoEntry_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Tapejara_C::ExecuteUbergraph_DinoEntry_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Tapejara.DinoEntry_Tapejara_C.ExecuteUbergraph_DinoEntry_Tapejara");

	UDinoEntry_Tapejara_C_ExecuteUbergraph_DinoEntry_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
