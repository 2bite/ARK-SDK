// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_MicroRaptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_MicroRaptor.DinoEntry_MicroRaptor_C.ExecuteUbergraph_DinoEntry_MicroRaptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_MicroRaptor_C::ExecuteUbergraph_DinoEntry_MicroRaptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_MicroRaptor.DinoEntry_MicroRaptor_C.ExecuteUbergraph_DinoEntry_MicroRaptor");

	UDinoEntry_MicroRaptor_C_ExecuteUbergraph_DinoEntry_MicroRaptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
