#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_OverseerText_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OverseerText_EX.BP_OverseerText_EX_C
// 0x0429 (0x08E9 - 0x04C0)
class ABP_OverseerText_EX_C : public ABP_Emitter_Master_C
{
public:
	class UStaticMeshComponent*                        ImplantIcon;                                              // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRenderReadable;                                       // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        OverseerText1;                                            // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        OverseerText2;                                            // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TranslationBackground;                                    // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OverseerTextActors;                                       // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            PlayerDetectionBounds;                                    // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTranslation_CycleOff_A9098F434D55B89B86D37999A51CC45D;// 0x0508(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DisplayTranslation_Translation_BG_Cycle_On_A9098F434D55B89B86D37999A51CC45D;// 0x050C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DisplayTranslation_CycleOn_A9098F434D55B89B86D37999A51CC45D;// 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DisplayTranslation__Direction_A9098F434D55B89B86D37999A51CC45D;// 0x0514(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0515(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DisplayTranslation;                                       // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      GlyphRepresentation;                                      // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ConvertedBaseString;                                      // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      DisplayText;                                              // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Prefix;                                                   // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ConversionTemp;                                           // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                tempInt;                                                  // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	TArray<int>                                        UnicodeArray;                                             // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              InputText;                                                // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                GlyphColor1;                                              // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           GlyphMaterial;                                            // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveStrength;                                         // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	TArray<class FString>                              TranslatedFormattedStrings;                               // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              FormattedText;                                            // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                WordsPerRow;                                              // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondsPerTick;                                           // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      GlyphText;                                                // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      GlyphTextOffset;                                          // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     TextLocation;                                             // 0x0600(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TextOffset;                                               // 0x060C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               offsetLeft;                                               // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	int                                                AscensionTestingLevel;                                    // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReadableTextColor;                                        // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RowCharacterLimit;                                        // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslationOn;                                           // 0x0634(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverlapped;                                              // 0x0635(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTimePlaying;                                             // 0x0636(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x9];                                       // 0x0637(0x0009) MISSED OFFSET
	struct UObject_FTransform                          PlayerDetectionBoundsPosition;                            // 0x0640(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct UObject_FTransform                          TextTransform;                                            // 0x0670(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bHelmetOn;                                                // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x06A2(0x0002) MISSED OFFSET
	struct FVector                                     ComponentBounds;                                          // 0x06A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfLines;                                            // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetupDone;                                               // 0x06B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	int                                                AlignmentTranslatedText;                                  // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AlignmentGlyphText;                                       // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRanAnimation;                                            // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x06C1(0x0003) MISSED OFFSET
	float                                              MaxDistanceFade;                                          // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslatedTextVisible;                                   // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x06C9(0x0007) MISSED OFFSET
	struct UObject_FTransform                          TranslatedTextTransform;                                  // 0x06D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct UObject_FTransform                          TranslationBackgroundTransform;                           // 0x0700(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TranslatedTextSizeMultiplier;                             // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    IconMat;                                                  // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          IconTransform;                                            // 0x0740(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowTranslation;                                         // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    OverseerDynamicMat;                                       // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTranslatedCharsPerLine;                                // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TranslatedPlaneScale;                                     // 0x0784(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0791(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetPlayerPawn_ReturnValue;                       // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_MakeLiteralString_ReturnValue;                   // 0x07A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x07B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x07B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x07B9(0x0007) MISSED OFFSET
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x07C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x07D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x07DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x07E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x07E1(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x07E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_BuildString_Int_ReturnValue;                     // 0x07E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor2;                   // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp2;                    // 0x0800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex2;               // 0x0808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x080C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x0810(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x08A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x08A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x08AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x08AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x08AE(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x08B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x08B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x08B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x08C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue2;      // 0x08C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue2;                    // 0x08D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x08D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x08D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x08D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x08D7(0x0001) MISSED OFFSET
	TArray<class FString>                              CallFunc_InitializeGlyphs_FormattedText;                  // 0x08D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x08E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OverseerText_EX.BP_OverseerText_EX_C");
		return ptr;
	}


	void ConstructionProcess();
	void InitializeGlyphs(TArray<class FString>* FormattedText);
	void SplitEveryOtherLine(const class FString& Line, class FString* StartingText, class FString* OffsetText);
	void Convert_To_Base(int Num, int Base, class FString* converted);
	void FormatReadableText(int MaxCharPerLine, TArray<class FString>* OriginalText, TArray<class FString>* FormattedText);
	void Setup(int WordsPerRow, TArray<class FString>* OriginalText);
	void RenderOriginalText(class UTextRenderComponent* TextRender, const struct FLinearColor& Color, int TranslationLevel, TArray<class FString>* Text);
	void RenderGlyph(const class FString& GlyphRepresentation, const struct FLinearColor& Color, class UTextRenderComponent* TextRender, bool offsetLeft, bool Offset);
	void Translation(const class FString& Text, class FString* GlyphTranslation);
	void UserConstructionScript();
	void DisplayTranslation__FinishedFunc();
	void DisplayTranslation__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__MyBounds_K2Node_ComponentBoundEvent_150_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__MyBounds_K2Node_ComponentBoundEvent_383_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CheckHelmet();
	void ExecuteUbergraph_BP_OverseerText_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
