// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Achatina_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Achatina.DinoEntry_Achatina_C.ExecuteUbergraph_DinoEntry_Achatina
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Achatina_C::ExecuteUbergraph_DinoEntry_Achatina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Achatina.DinoEntry_Achatina_C.ExecuteUbergraph_DinoEntry_Achatina");

	UDinoEntry_Achatina_C_ExecuteUbergraph_DinoEntry_Achatina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
